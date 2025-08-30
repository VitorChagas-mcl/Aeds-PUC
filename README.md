# 📚 Atividades de AEDS (Algoritmos e Estruturas de Dados)

Olá! 👋  
Meu nome é **Vitor Hugo Chagas Maciel**, sou estudante de **Ciência da Computação** na **PUC Minas**.  
Aqui você encontra algumas das minhas atividades e exercícios desenvolvidos na disciplina de **AEDS**. 🚀  

---

## 🎯 Objetivo
Este repositório tem como objetivo reunir os códigos e soluções de problemas propostos ao longo da disciplina, servindo como material de estudo e consulta futura.

---

## 📂 Estrutura do Repositório
- `listas/` → Exercícios organizados por listas.  
- `provas/` → Questões de provas resolvidas.  
- `projetos/` → Projetos práticos e trabalhos maiores.  

---

## 🛠️ Tecnologias Utilizadas
- Linguagem C (`.c`)
- Compilador GCC
- Git & GitHub para versionamento

---

## 🚀 Exemplos de Conteúdo

### 🔹 Exercício: Tipo de Triângulo
```c
char* triangleType(int* nums, int numsSize) {
    if(nums[2] >= nums[0] + nums[1] || 
       nums[0] >= nums[1] + nums[2] || 
       nums[1] >= nums[0] + nums[2]) {
        return "none";
    } else if(nums[0] == nums[1] && nums[1] == nums[2]) {
        return "equilateral";
    } else if(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) {
        return "isosceles";
    }
    return "scalene";
}
