/* RESET */
*{
    margin:0;
    padding:0;
    box-sizing:border-box;
}

/* BODY */
body{
    font-family: 'Poppins', sans-serif;
    background:#ffd83d;
    color:#333;
}

/* HEADER */
header{
    background:#ffcc00;
    text-align:center;
    padding:30px 20px;
    box-shadow:0 4px 10px rgba(0,0,0,0.1);
}

header h1{
    font-size:42px;
    color:white;
    margin-bottom:10px;
    letter-spacing:1px;
}

header p{
    color:white;
    font-size:16px;
}

/* CONTAINER */
.container{
    width:90%;
    margin:40px auto;
    display:grid;
    grid-template-columns:repeat(auto-fit,minmax(250px,1fr));
    gap:25px;
}

/* CARD */
.card{
    background:white;
    border-radius:25px;
    overflow:hidden;
    box-shadow:0 6px 15px rgba(0,0,0,0.15);
    transition:0.3s ease;
}

.card:hover{
    transform:translateY(-10px);
}

/* IMAGE */
.card img{
    width:100%;
    height:280px;
    object-fit:cover;
}

/* CONTENT */
.card-content{
    padding:20px;
    text-align:center;
}

.card-content h2{
    font-size:24px;
    color:#ff9900;
    margin-bottom:10px;
}

/* PRICE */
.price{
    font-size:22px;
    font-weight:bold;
    color:#333;
}

.discount{
    text-decoration:line-through;
    color:red;
    margin-right:8px;
    font-size:16px;
}

/* BUTTON */
button{
    margin-top:18px;
    padding:12px 24px;
    border:none;
    border-radius:30px;
    background:#ffcc00;
    color:white;
    font-size:16px;
    font-weight:bold;
    cursor:pointer;
    transition:0.3s;
}

button:hover{
    background:#ffaa00;
    transform:scale(1.05);
}

/* FOOTER */
footer{
    background:#ffcc00;
    text-align:center;
    padding:18px;
    color:white;
    margin-top:40px;
    font-size:14px;
}

/* RESPONSIVE */
@media(max-width:768px){

    header h1{
        font-size:32px;
    }

    .card img{
        height:240px;
    }

}
