#Esse programa recebe um arquivo json q contem o numero de vagas, e os participantes
#fazendo uma analise verificando quem passo. caso o numero de vagas chegue no limite 
#e existe empates,dou para o usuario escolher entre as possibilidades, no final printando
#os aprovados


import json

with open("arquivo.json", 'r') as f:
    alunos = json.load(f)
    participantes = alunos['participantes']
    vagas = alunos['quantidadeVagas']

notas = []
nomes = []

for i in range (len(participantes)):
    notas.append((participantes[i]['nota1'] + participantes[i]['nota2'] + participantes[i]['nota3']) / 3)
    nomes.append(participantes[i]['nomeAluno'])

participantes_com_media = dict(zip(nomes, notas))
sort = sorted(participantes_com_media.items(), key=lambda x:x[1], reverse = True)

for i in range(len(sort)):
    nomes[i],notas[i] = sort[i]


if vagas >= len(notas):
    print("\n")
    print("Os aprovados foram: ")
    for i in range(len(notas)):
        print(nomes[i], " com a nota: ",notas[i])
    exit()


aprovados_nota = []
aprovados_nome = []
empatados_nota = []
empatados_nome = []

for i in range(len(notas)):
    if i == 0:
        if notas[i] == notas[i + 1]:
            empatados_nota.append(notas[i])
            empatados_nome.append(nomes[i])
    else:
        if notas[i] == notas[i - 1] or notas[i] == notas[i + 1]:
            empatados_nota.append(notas[i])
            empatados_nome.append(nomes[i])

while vagas > 0:    
    for i in range(len(notas)):
        if notas[i] not in empatados_nota:
            aprovados_nota.append(notas[i])
            aprovados_nome.append(nomes[i])
            vagas -= 1

    while vagas != 0:
        for i in range(len(empatados_nota)):
            print("Escreva ", i, " para escolher o aluno ", empatados_nome[i])
            
        escolha = int(input())
        if escolha not in range(len(empatados_nota)):
            print("O numero informado não faz parte das possibilidades, tente novamente")
            continue
        aprovados_nome.append(empatados_nome[escolha])
        aprovados_nota.append(empatados_nota[escolha])
        del(empatados_nome[escolha])
        del(empatados_nota[escolha])
        vagas -= 1


print("\n")
print("Os aprovados foram: ")
for i in range(len(aprovados_nota)):
    print("O aluno(a):", aprovados_nome[i], " com a nota: ",aprovados_nota[i])