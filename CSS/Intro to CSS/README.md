# CSS Notes (Cascading Style Sheets)

## 📌 Introduction
- **CSS (Cascading Style Sheets)** is used to style HTML elements.
- It controls **layout, colors, fonts, spacing, and animations**.
- CSS works with **HTML & JavaScript** to create visually appealing web pages.

---

## 🎯 How to Use CSS
### **1️⃣ Inline CSS** (Styles applied directly to an element)
```html
<p style="color: red; font-size: 20px;">This is a red paragraph.</p>
```

### **2️⃣ Internal CSS** (CSS inside `<style>` tag within the `<head>` section)
```html
<style>
p {
    color: blue;
    font-size: 18px;
}
</style>
```

### **3️⃣ External CSS** (Recommended for large projects, saved in a `.css` file)
- **HTML file:**
```html
<link rel="stylesheet" href="styles.css">
```
- **CSS file (styles.css):**
```css
p {
    color: green;
    font-size: 16px;
}
```

---

## 🎨 Selectors in CSS
### **✅ Basic Selectors**
| Selector | Example | Description |
|----------|--------|-------------|
| `*` | `* { margin: 0; }` | Selects all elements |
| `p` | `p { color: blue; }` | Selects all `<p>` tags |
| `.class` | `.btn { background: red; }` | Selects elements with class `btn` |
| `#id` | `#header { font-size: 24px; }` | Selects element with id `header` |

### **✅ Advanced Selectors**
| Selector | Example | Description |
|----------|--------|-------------|
| `div > p` | `div > p { color: red; }` | Selects `<p>` inside `<div>` (direct child) |
| `ul li` | `ul li { color: blue; }` | Selects all `<li>` inside `<ul>` |
| `p:first-child` | `p:first-child { font-weight: bold; }` | Selects first `<p>` inside its parent |
| `a:hover` | `a:hover { color: green; }` | Styles `<a>` when hovered |

---

## 🎭 CSS Properties
### **📌 Text & Font Styling**
```css
p {
    color: blue; /* Text color */
    font-size: 18px; /* Font size */
    font-weight: bold; /* Bold text */
    font-style: italic; /* Italic text */
    text-align: center; /* Align text */
}
```

### **📌 Background & Borders**
```css
div {
    background-color: lightgray; /* Background color */
    border: 2px solid black; /* Solid border */
    border-radius: 10px; /* Rounded corners */
}
```

### **📌 Box Model (Padding, Margin, Width, Height)**
```css
div {
    width: 300px;
    height: 200px;
    padding: 20px; /* Space inside the border */
    margin: 10px; /* Space outside the border */
    box-shadow: 2px 2px 5px gray; /* Shadow effect */
}
```

---

## 📏 CSS Layout & Positioning
### **✅ Display Property**
| Property | Description |
|----------|-------------|
| `display: block;` | Takes full width (default for `<div>`, `<p>`) |
| `display: inline;` | Fits content width (default for `<span>`, `<a>`) |
| `display: flex;` | Flexible layout (used for responsive design) |
| `display: grid;` | Grid-based layout |

### **✅ Position Property**
| Property | Description |
|----------|-------------|
| `position: static;` | Default (normal flow) |
| `position: relative;` | Moves relative to itself |
| `position: absolute;` | Moves relative to the nearest positioned ancestor |
| `position: fixed;` | Stays fixed while scrolling |
| `position: sticky;` | Sticks when scrolling |

Example:
```css
div {
    position: absolute;
    top: 50px;
    left: 100px;
}
```

---

## 🔹 Flexbox (For Responsive Layouts)
```css
.container {
    display: flex;
    justify-content: center; /* Align horizontally */
    align-items: center; /* Align vertically */
    height: 100vh; /* Full viewport height */
}
```
| Property | Description |
|----------|-------------|
| `flex-direction: row;` | Items in a row (default) |
| `flex-direction: column;` | Items in a column |
| `justify-content: center;` | Aligns items horizontally |
| `align-items: center;` | Aligns items vertically |

---

## 📌 CSS Grid (Advanced Layouts)
```css
.container {
    display: grid;
    grid-template-columns: 1fr 2fr;
    grid-gap: 10px;
}
```
| Property | Description |
|----------|-------------|
| `grid-template-columns: 1fr 2fr;` | Two columns (one smaller, one larger) |
| `grid-gap: 10px;` | Adds spacing between grid items |
| `align-items: center;` | Aligns grid items vertically |

---

## ✨ CSS Animations
```css
@keyframes example {
    0% { background-color: red; }
    100% { background-color: blue; }
}
div {
    animation: example 2s infinite;
}
```
| Property | Description |
|----------|-------------|
| `animation-name` | Name of the animation |
| `animation-duration` | How long the animation runs |
| `animation-iteration-count` | Number of times it repeats |
| `animation-timing-function` | Speed curve (ease, linear, etc.) |

---

## 🔥 Cheat Sheet
| Feature | Example |
|---------|------------|
| Change text color | `color: red;` |
| Center text | `text-align: center;` |
| Background color | `background-color: yellow;` |
| Box shadow | `box-shadow: 2px 2px 5px gray;` |
| Hover effect | `a:hover { color: blue; }` |
| Responsive design | `@media (max-width: 600px) { div { width: 100%; } }` |

---

## 🎯 Summary
- CSS **styles** web pages and controls layout.
- Three ways to use CSS: **Inline, Internal, External**.
- Uses **selectors** (`.class`, `#id`, `*`, etc.) to target elements.
- **Flexbox & Grid** help create responsive layouts.
- **Animations & Transitions** make web pages dynamic.

---

This **CSS guide** covers all the essentials in a simple, easy-to-read format! 🚀

Do you need more details on any topic? 😊

