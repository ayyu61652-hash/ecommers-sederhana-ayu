*{
    box-sizing: border-box;
}

/* Warna utama */
:root{
    --Utama:#001aff;
    --Gelap:#050505;
    --Gelap-2:#121212;
    --Text-Terang:#ffffff;
    --Text-Abu:#b0b0b0;
}

/* supaya gambar tidak meluber */
img{
max-width:100%;
height:auto;
}
}

body{
    font-family:'Segoe UI',Roboto,sans-serif;
    margin:0;
    padding:0;
    background:var(--Gelap);
    color:var(--Text-Terang);
    scroll-behavior:smooth;
}

/* HEADER */

header{
    display:flex;
    justify-content:space-between;
    align-items:center;
    padding:20px 5%;
    background:rgba(0,0,0,0.9);
    border-bottom:1px solid rgba(0,161,255,0.2);
    position:sticky;
    top:0;
    z-index:1000;
    backdrop-filter:blur(10px);
}

.e-nama{
    font-size:1.5rem;
    color:var(--Utama);
    margin:0;
}

nav a{
    color:var(--Text-Terang);
    margin-left:25px;
    text-decoration:none;
    font-size:0.9rem;
    text-transform:uppercase;
    letter-spacing:1px;
    transition:0.3s;
}

nav a:hover{
    color:var(--Utama);
}

/* HERO SECTION */

.section-1{
    padding:80px 20px;
    text-align:center;
    background:radial-gradient(circle at center,rgba(0,26,225,0.4) 0%,rgba(0,5,5,0) 70%);
}

.section-1 h1{
    font-size:3rem;
    margin-bottom:10px;
}

.section-1 p{
    color:var(--Text-Abu);
    font-size:1.1rem;
    margin-bottom:30px;
}

/* Banner */

.section-1 img{
    width:100%;
    max-width:860px;
    height:340px;
    object-fit:cover;
    border-radius:16px;
    display:block;
    margin:0 auto 30px;
}

/* Judul produk */

.p-rekomendasi{
    text-align:center;
    margin-top:50px;
    font-size:2rem;
    color:var(--Utama);
}

/* GRID PRODUK */

.produk-container{
    display:grid;
    grid-template-columns:repeat(auto-fit,minmax(250px,1fr));
    gap:25px;
    padding:40px 5%;
}

/* CARD PRODUK */

.card{
    background:var(--Gelap-2);
    border:1px solid #222;
    padding:20px;
    text-align:center;
    border-radius:15px;
    transition:0.4s;
}

.card:hover{
    transform:translateY(-10px);
    border-color:var(--Utama);
    box-shadow:0 10px 30px rgba(0,161,255,0.15);
}

/* Gambar produk */

..card img{
    width:100%;
    max-width:220px;
    height:180px;
    object-fit:cover;
    display:block;
    margin:auto;
}
}

/* teks produk */

.card h3{
    font-size:1.2rem;
    margin:10px 0;
}

.card .harga{
    color:var(--Utama);
    font-weight:bold;
    font-size:1.1rem;
}

.card .harga-coret{
    color:var(--Text-Abu);
    text-decoration:line-through;
    font-size:0.9rem;
}

.card .kategori{
    color:var(--Text-Abu);
    font-size:0.85rem;
    margin-bottom:10px;
}

/* tombol */

.btn-sec-1{
    background:var(--Utama);
    color:black;
    border:none;
    padding:15px 30px;
    border-radius:30px;
    font-weight:bold;
    cursor:pointer;
}

.btn-buy{
    background:transparent;
    color:var(--Utama);
    border:1px solid var(--Utama);
    padding:10px;
    cursor:pointer;
    border-radius:5px;
    width:100%;
    font-weight:bold;
    text-transform:uppercase;
    transition:0.3s;
}

.btn-buy:hover{
    background:var(--Utama);
    color:#000;
}

/* footer */

footer{
    background:#000;
    color:var(--Text-Abu);
    text-align:center;
    padding:40px 20px;
    margin-top:50px;
}

footer p{
    font-size:0.9rem;
}

/* RESPONSIVE */

@media (max-width:768px){

header{
    flex-direction:column;
    gap:15px;
}

nav{
    display:flex;
    flex-wrap:wrap;
    justify-content:center;
    gap:10px;
}

nav a{
    margin-left:0;
}

.section-1 img{
    width:100%;
    max-width:900px;
    height:300px;
    object-fit:cover;
    border-radius:15px;
}
}

.p-rekomendasi{
    font-size:1.5rem;
}

}

@media (max-width:480px){

..produk-container{
    display:grid;
    grid-template-columns:repeat(auto-fit,minmax(220px,1fr));
    gap:20px;
    padding:40px 5%;
}
}

.card{
    padding:10px;
}

.card img{
    height:120px;
}

.card h3{
    font-size:0.9rem;
}

.card .harga{
    font-size:0.85rem;
}

.btn-buy{
    font-size:0.7rem;
    padding:8px;
}

}
.product-container {
  display: grid;
  /* Membuat kolom otomatis yang menyesuaikan lebar layar */
  grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
  gap: 20px; /* Jarak antar kartu */
  padding: 20px;
}

.product-card {
  border: 1px solid #eee;
  border-radius: 8px;
  padding: 15px;
  text-align: center;
  display: flex;
  flex-direction: column;
  justify-content: space-between;
}

.product-card img {
  max-width: 100%;
  height: auto;
  object-fit: contain; /* Agar gambar tidak terpotong */
}
