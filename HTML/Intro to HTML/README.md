# HTML Notes (HyperText Markup Language)

## 📌 Introduction

- **HTML (HyperText Markup Language)** is used to create web pages.
- It provides structure using **tags** and **elements**.
- HTML is **not a programming language**, but a markup language.

---

## 🏗 Basic Structure

```html
<!DOCTYPE html>
<html>
<head>
    <title>My First Web Page</title>
</head>
<body>
    <h1>Welcome to My Website</h1>
    <p>This is a paragraph.</p>
</body>
</html>

```

- `<!DOCTYPE html>` → Defines HTML5 document type.
- `<html>` → Root element of the page.
- `<head>` → Contains meta-information (like title, styles, scripts).
- `<title>` → Sets the title of the webpage.
- `<body>` → Contains the visible content.
- `<h1>` to `<h6>` → Headings (h1 is largest, h6 is smallest).
- `<p>` → Paragraph tag.

---

## 🔹 Common HTML Elements

### **1️⃣ Text Formatting Tags**

| Tag | Description |
| --- | --- |
| `<b>` | Bold Text |
| `<i>` | Italic Text |
| `<u>` | Underlined Text |
| `<mark>` | Highlighted Text |
| `<small>` | Small Text |
| `<strong>` | Important Text (Bold) |
| `<em>` | Emphasized Text (Italic) |

Example:

```html
<p>
    This is 
    <b>bold</b>, 
    <i>italic</i>,
    <u>underlined</u>,
    <mark>highlighted</mark>,
    <small>small</small>,
    <strong>strong</strong>,
    and <em>emphasized </em> text.
</p>

```

---

### **2️⃣ Lists**

- **Ordered List (`<ol>`)** → Numbered list
- **Unordered List (`<ul>`)** → Bullet points
- **List Items (`<li>`)** → Items inside lists

Example:

```html
<h3>Shopping List</h3>
<ul>
    <li>Milk</li>
    <li>Bread</li>
    <li>Eggs</li>
    <li>Fish</li>
</ul>

<h3>Places to visit</h3>
<ol>
    <li>Shopping Mall</li>
    <li>Park</li>
    <li>Beach</li>
</ol>

```

---

### **3️⃣ Links & Images**

### ✅ **Links (`<a>`)**

```html
<a href="https://www.google.com">Visit Google</a>

```

- `href` → Specifies the URL.

### ✅ **Images (`<img>`)**

```html
<img src="image.jpg" alt="Description" width="300">

```

- `src` → Image source.
- `alt` → Alternative text.
- `width` → Image width.

---

### **4️⃣ Tables**

```html
<table border="1">
    <tr>
        <th>Name</th>
        <th>Age</th>
    </tr>
    <tr>
        <td>Alice</td>
        <td>22</td>
    </tr>
</table>

```

- `<table>` → Creates a table.
- `<tr>` → Table row.
- `<th>` → Header cell.
- `<td>` → Data cell.

---

### **5️⃣ Forms**

```html
<form action="submit.php" method="post">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name" required>

    <label for="email">Email:</label>
    <input type="email" id="email" name="email">

    <input type="submit" value="Submit">
</form>

```

- `<form>` → Creates a form.
- `<input>` → User input fields.
- `type="text"` → Text input field.
- `type="email"` → Email input field.
- `type="submit"` → Submit button.
- `required` → Makes the field mandatory.

---

## 🎨 HTML + CSS (Basic Styling)

```html
<style>
    p { color: blue; font-size: 18px; }
</style>
<p>This is blue text.</p>

```

- `color: blue;` → Changes text color.
- `font-size: 18px;` → Adjusts font size.

---

## 🚀 Advanced Topics

### **✅ Semantic HTML** (Better structure)

| Tag | Use |
| --- | --- |
| `<header>` | Defines page header |
| `<nav>` | Navigation links |
| `<section>` | Defines a section |
| `<article>` | Self-contained content |
| `<footer>` | Footer section |

Example:

```html
<header>
    <h1>My Website</h1>
</header>
<nav>
    <a href="#">Home</a>
    <a href="#">About</a>
</nav>
<section>
    <article>
        <h2>Article Title</h2>
        <p>Article content...</p>
    </article>
</section>
<footer>
    <p>Copyright 2025</p>
</footer>

```

---

## 🔥 Cheat Sheet

| Feature | Tag Example |
| --- | --- |
| Heading | `<h1>Title</h1>` |
| Paragraph | `<p>Text</p>` |
| Link | `<a href="URL">Click</a>` |
| Image | `<img src="image.jpg">` |
| List | `<ul><li>Item</li></ul>` |
| Table | `<table><tr><td>Data</td></tr></table>` |
| Form | `<form><input type="text"></form>` |

---

## 🎯 Summary

- HTML is the **structure** of web pages.
- Uses **tags** (`<>`) to define elements.
- Can be styled using **CSS**.
- Follows **semantic** rules for better accessibility.
- Forms help collect user data.

---