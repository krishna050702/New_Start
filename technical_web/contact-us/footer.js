class footerBar extends HTMLElement {

    constructor() {
        super()
        this.attachShadow({ mode: 'open' })

        const wrapper = document.createElement('div')
        wrapper.setAttribute('class', 'contact-us-container')

        wrapper.innerHTML = `
        <div class="map-copyright">
            <iframe class="map"
                src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d1469.3490309934944!2d79.06121229675324!3d21.176554800983375!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bd4c1a8970c08e9%3A0xfe4a9c97e7e671cb!2sShri%20Ramdeobaba%20College%20of%20Engineering%20and%20Management!5e0!3m2!1sen!2sin!4v1639044960358!5m2!1sen!2sin"
                width="300" height="300" style="border:0;" loading="lazy">
            </iframe>

            <p>
                Copyright 2021 Technical club RCOEM - All Rights Reserved
            </p>
        </div>

        <div class="details-social">
            <div class="details">
                <div class="icon-data">
                    <img src="./contact-us/images/location.svg" alt="location">
                    <div class="data">
                        Shri Ramdeobaba College of Engineering and Management, Katol Rd, Lonand, Gittikhadan, Nagpur,
                        Maharashtra 440013
                    </div>
                </div>
                <div class="icon-data">
                    <img src="./contact-us/images/phone.svg" alt="phone">
                    <div class="data">
                        0712 258 0011
                    </div>
                </div>
                <div class="icon-data">
                    <img src="./contact-us/images/email.svg" alt="email">
                    <div class="data">
                        technicalclub@rknec.edu
                    </div>
                </div>
            </div>
            <div class="socials">
                <a href="https://instagram.com/technicalclubrcoem?utm_medium=copy_link" target="_blank">
                    <svg width="50" height="46" viewBox="0 0 50 46" fill="none" xmlns="http://www.w3.org/2000/svg">
                        <path
                            d="M25 17.42C23.8146 17.42 22.6559 17.7473 21.6703 18.3604C20.6847 18.9735 19.9165 19.845 19.4629 20.8646C19.0093 21.8842 18.8906 23.0062 19.1218 24.0886C19.3531 25.171 19.9239 26.1653 20.7621 26.9457C21.6003 27.726 22.6682 28.2575 23.8308 28.4728C24.9933 28.6881 26.1984 28.5776 27.2935 28.1553C28.3887 27.7329 29.3247 27.0177 29.9833 26.1001C30.6418 25.1825 30.9933 24.1036 30.9933 23C30.9933 22.2672 30.8383 21.5416 30.5371 20.8646C30.2359 20.1876 29.7945 19.5725 29.2379 19.0543C28.6814 18.5362 28.0207 18.1252 27.2935 17.8448C26.5664 17.5643 25.7871 17.42 25 17.42ZM48.9975 11.9075C48.9848 10.17 48.6411 8.44829 47.9825 6.8225C47.4974 5.63284 46.7469 4.55246 45.7805 3.65267C44.814 2.75287 43.6536 2.05411 42.3758 1.6025C40.6296 0.989294 38.7804 0.669337 36.9142 0.6575C33.7967 0.5 32.8783 0.5 25 0.5C17.1217 0.5 16.2033 0.5 13.0858 0.6575C11.2196 0.669337 9.37038 0.989294 7.62416 1.6025C6.34637 2.05411 5.18597 2.75287 4.21953 3.65267C3.25308 4.55246 2.50256 5.63284 2.01749 6.8225C1.35887 8.44829 1.01521 10.17 1.00249 11.9075C0.833328 14.81 0.833328 15.665 0.833328 23C0.833328 30.335 0.833328 31.19 1.00249 34.0925C1.02851 35.8362 1.3717 37.5631 2.01749 39.2C2.50041 40.3842 3.25031 41.4584 4.21666 42.35C5.17896 43.2552 6.34185 43.954 7.62416 44.3975C9.37038 45.0107 11.2196 45.3307 13.0858 45.3425C16.2033 45.5 17.1217 45.5 25 45.5C32.8783 45.5 33.7967 45.5 36.9142 45.3425C38.7804 45.3307 40.6296 45.0107 42.3758 44.3975C43.6581 43.954 44.821 43.2552 45.7833 42.35C46.7497 41.4584 47.4996 40.3842 47.9825 39.2C48.6405 37.5662 48.9841 35.8373 48.9975 34.0925C49.1667 31.19 49.1667 30.335 49.1667 23C49.1667 15.665 49.1667 14.81 48.9975 11.9075ZM42.8592 29.9075C42.7816 31.296 42.4633 32.6637 41.9167 33.9575C41.4475 35.0368 40.7501 36.0172 39.8658 36.8405C38.9815 37.6639 37.9284 38.3132 36.7692 38.75C35.3663 39.2306 33.8891 39.4965 32.395 39.5375C30.4858 39.5375 29.9783 39.5375 25 39.5375C20.0217 39.5375 19.5142 39.5375 17.605 39.5375C16.1108 39.4965 14.6337 39.2306 13.2308 38.75C12.0324 38.3354 10.9502 37.6739 10.065 36.815C9.18936 36.0078 8.51312 35.0327 8.08333 33.9575C7.56509 32.6528 7.28729 31.2759 7.26166 29.885C7.26166 28.1075 7.26166 27.635 7.26166 23C7.26166 18.365 7.26166 17.8925 7.26166 16.115C7.28729 14.7241 7.56509 13.3472 8.08333 12.0425C8.52868 10.9267 9.23916 9.91913 10.1617 9.095C11.0325 8.28415 12.0787 7.65521 13.2308 7.25C14.6337 6.76941 16.1108 6.50347 17.605 6.4625C19.5142 6.4625 20.0217 6.4625 25 6.4625C29.9783 6.4625 30.4858 6.4625 32.395 6.4625C33.8891 6.50347 35.3663 6.76941 36.7692 7.25C37.9676 7.66463 39.0498 8.32612 39.935 9.185C40.8106 9.99219 41.4869 10.9673 41.9167 12.0425C42.4328 13.3486 42.7185 14.7239 42.7625 16.115C42.7625 17.8925 42.7625 18.365 42.7625 23C42.7625 27.635 42.9317 28.1075 42.8592 29.885V29.9075ZM38.9925 13.1675C38.7048 12.4407 38.2511 11.7807 37.6628 11.233C37.0745 10.6853 36.3656 10.2629 35.585 9.995C34.5131 9.64909 33.3842 9.48153 32.25 9.5C30.365 9.5 29.8333 9.5 25 9.5C20.1667 9.5 19.635 9.5 17.75 9.5C16.61 9.51038 15.4809 9.70843 14.415 10.085C13.6463 10.3407 12.9449 10.7459 12.3574 11.2735C11.7699 11.8011 11.3097 12.439 11.0075 13.145C10.6565 14.1471 10.4851 15.1961 10.5 16.25C10.5 18.005 10.5 18.5 10.5 23C10.5 27.5 10.5 27.995 10.5 29.75C10.524 30.8102 10.7363 31.8594 11.1283 32.855C11.4161 33.5818 11.8697 34.2418 12.458 34.7895C13.0463 35.3372 13.7552 35.7596 14.5358 36.0275C15.5669 36.3806 16.652 36.578 17.75 36.6125C19.635 36.6125 20.1667 36.6125 25 36.6125C29.8333 36.6125 30.365 36.6125 32.25 36.6125C33.39 36.6021 34.5191 36.4041 35.585 36.0275C36.3656 35.7596 37.0745 35.3372 37.6628 34.7895C38.2511 34.2418 38.7048 33.5818 38.9925 32.855C39.397 31.8626 39.6097 30.8114 39.6208 29.75C39.6208 27.995 39.6208 27.5 39.6208 23C39.6208 18.5 39.6208 18.005 39.6208 16.25C39.6215 15.1875 39.4084 14.1344 38.9925 13.145V13.1675ZM25 31.595C23.7888 31.595 22.5895 31.3725 21.4708 30.9403C20.3522 30.5081 19.3361 29.8746 18.4808 29.0762C17.6254 28.2778 16.9477 27.3301 16.4864 26.2875C16.0251 25.2448 15.7893 24.1277 15.7925 23C15.7925 21.2991 16.3345 19.6365 17.35 18.2225C18.3655 16.8086 19.8087 15.707 21.497 15.0571C23.1852 14.4073 25.0427 14.2384 26.8341 14.5718C28.6255 14.9053 30.2704 15.7261 31.5605 16.9304C32.8506 18.1347 33.7279 19.6683 34.0814 21.337C34.4349 23.0058 34.2486 24.7347 33.5462 26.3048C32.8437 27.8749 31.6567 29.2157 30.1354 30.1574C28.6141 31.0992 26.8269 31.5995 25 31.595ZM34.6667 16.0925C34.1324 16.0399 33.638 15.805 33.2787 15.4332C32.9194 15.0614 32.7206 14.5789 32.7206 14.0788C32.7206 13.5786 32.9194 13.0961 33.2787 12.7243C33.638 12.3525 34.1324 12.1177 34.6667 12.065C35.2009 12.1177 35.6953 12.3525 36.0546 12.7243C36.4139 13.0961 36.6127 13.5786 36.6127 14.0788C36.6127 14.5789 36.4139 15.0614 36.0546 15.4332C35.6953 15.805 35.2009 16.0399 34.6667 16.0925Z"
                            fill="black" />
                    </svg>
                </a>
                <a href="https://www.linkedin.com/company/technicalclubrcoem" target="_blank">
                    <svg width="50" height="46" viewBox="0 0 50 46" fill="none" xmlns="http://www.w3.org/2000/svg">
                        <path
                            d="M45.4692 0.500009H4.53083C4.07065 0.494059 3.61371 0.572566 3.18612 0.731048C2.75852 0.88953 2.36865 1.12488 2.03876 1.42366C1.70887 1.72244 1.44543 2.0788 1.26348 2.47238C1.08153 2.86596 0.984636 3.28906 0.978333 3.71751V42.2825C0.984636 42.711 1.08153 43.1341 1.26348 43.5276C1.44543 43.9212 1.70887 44.2776 2.03876 44.5764C2.36865 44.8751 2.75852 45.1105 3.18612 45.269C3.61371 45.4275 4.07065 45.506 4.53083 45.5H45.4692C45.9294 45.506 46.3863 45.4275 46.8139 45.269C47.2415 45.1105 47.6314 44.8751 47.9612 44.5764C48.2911 44.2776 48.5546 43.9212 48.7365 43.5276C48.9185 43.1341 49.0154 42.711 49.0217 42.2825V3.71751C49.0154 3.28906 48.9185 2.86596 48.7365 2.47238C48.5546 2.0788 48.2911 1.72244 47.9612 1.42366C47.6314 1.12488 47.2415 0.88953 46.8139 0.731048C46.3863 0.572566 45.9294 0.494059 45.4692 0.500009ZM15.5508 38.165H8.30083V17.915H15.5508V38.165ZM11.9258 15.08C10.926 15.08 9.96705 14.7102 9.26004 14.052C8.55303 13.3937 8.15583 12.5009 8.15583 11.57C8.15583 10.6391 8.55303 9.74632 9.26004 9.08807C9.96705 8.42981 10.926 8.06001 11.9258 8.06001C12.4568 8.00395 12.9944 8.05293 13.5036 8.20375C14.0128 8.35456 14.482 8.60381 14.8806 8.93517C15.2791 9.26653 15.598 9.67254 15.8164 10.1266C16.0347 10.5807 16.1476 11.0725 16.1476 11.57C16.1476 12.0675 16.0347 12.5594 15.8164 13.0134C15.598 13.4675 15.2791 13.8735 14.8806 14.2048C14.482 14.5362 14.0128 14.7855 13.5036 14.9363C12.9944 15.0871 12.4568 15.1361 11.9258 15.08ZM41.6992 38.165H34.4492V27.2975C34.4492 24.575 33.41 22.7975 30.7758 22.7975C29.9606 22.8031 29.1668 23.0411 28.5014 23.4796C27.8359 23.9182 27.3308 24.536 27.0542 25.25C26.8651 25.7789 26.7831 26.3358 26.8125 26.8925V38.1425H19.5625C19.5625 38.1425 19.5625 19.7375 19.5625 17.8925H26.8125V20.75C27.4711 19.686 28.429 18.8094 29.5831 18.2147C30.7371 17.62 32.0435 17.3297 33.3617 17.375C38.195 17.375 41.6992 20.2775 41.6992 26.51V38.165Z"
                            fill="black" />
                    </svg>
                </a>
                <a href="https://github.com/Technical-Club-RCOEM/Tech-Club-Website" target="_blank">
                    <svg width="58" height="53" viewBox="0 0 58 53" fill="none" xmlns="http://www.w3.org/2000/svg">
                        <path
                            d="M28.9964 0C12.9848 0 1.19664e-05 12.1365 1.19664e-05 27.108C-0.00652978 32.79 1.905 38.3302 5.46445 42.9456C9.0239 47.5611 14.0513 51.0184 19.836 52.8289C21.286 53.0786 21.8153 52.2416 21.8153 51.5228C21.8153 50.8781 21.7899 49.1737 21.7754 46.9125C13.7098 48.5494 12.006 43.2776 12.006 43.2776C10.6901 40.1456 8.78701 39.312 8.78701 39.312C6.15164 37.6312 8.98276 37.665 8.98276 37.665C11.8936 37.8574 13.4234 40.4595 13.4234 40.4595C16.0116 44.6006 20.213 43.4059 21.866 42.7106C22.127 40.959 22.8774 39.7643 23.7075 39.0859C17.2695 38.4008 10.498 36.0754 10.498 25.6905C10.498 22.7306 11.629 20.3107 13.485 18.414C13.1841 17.7289 12.1909 14.9715 13.7678 11.2421C13.7678 11.2421 16.2038 10.5131 21.7428 14.0197C24.109 13.4177 26.5507 13.1113 29.0036 13.1085C31.4567 13.113 33.8983 13.4206 36.2645 14.0231C41.7999 10.5165 44.2323 11.2455 44.2323 11.2455C45.8128 14.9782 44.8195 17.7323 44.5223 18.4174C46.3819 20.3141 47.502 22.734 47.502 25.6939C47.502 36.1058 40.7233 38.3974 34.2635 39.069C35.3039 39.906 36.2319 41.5597 36.2319 44.0876C36.2319 47.7124 36.1956 50.6351 36.1956 51.5228C36.1956 52.2484 36.7176 53.0921 38.1894 52.8255C43.9685 51.0107 48.9896 47.5521 52.5442 42.9378C56.0987 38.3234 58.007 32.7864 58 27.108C58 12.1365 45.0153 0 28.9964 0Z"
                            fill="black" />
                    </svg>
                </a>
                <a href="https://www.facebook.com/technicalclubrcoem" target="_blank">
                    <svg width="50" height="46" viewBox="0 0 50 46" fill="none" xmlns="http://www.w3.org/2000/svg">
                        <path
                            d="M46.5083 0.5H3.49167C2.78664 0.5 2.11048 0.760758 1.61194 1.22491C1.11341 1.68906 0.833336 2.31859 0.833336 2.975V43.025C0.833336 43.35 0.902096 43.6719 1.03569 43.9721C1.16928 44.2724 1.36509 44.5453 1.61194 44.7751C1.85879 45.0049 2.15185 45.1872 2.47437 45.3116C2.79689 45.436 3.14257 45.5 3.49167 45.5H26.6433V28.0625H20.36V21.3125H26.6433V16.25C26.5132 15.0615 26.6639 13.8608 27.0849 12.7322C27.5059 11.6036 28.187 10.5745 29.0805 9.71693C29.9739 8.85937 31.058 8.19419 32.2568 7.76804C33.4556 7.34188 34.74 7.16507 36.02 7.25C37.901 7.23922 39.781 7.32937 41.6508 7.52V13.595H37.8083C34.7633 13.595 34.1833 14.945 34.1833 16.9025V21.245H41.4333L40.4908 27.995H34.1833V45.5H46.5083C46.8574 45.5 47.2031 45.436 47.5256 45.3116C47.8482 45.1872 48.1412 45.0049 48.3881 44.7751C48.6349 44.5453 48.8307 44.2724 48.9643 43.9721C49.0979 43.6719 49.1667 43.35 49.1667 43.025V2.975C49.1667 2.64998 49.0979 2.32814 48.9643 2.02786C48.8307 1.72758 48.6349 1.45474 48.3881 1.22491C48.1412 0.995086 47.8482 0.812779 47.5256 0.688398C47.2031 0.564018 46.8574 0.5 46.5083 0.5Z"
                            fill="black" />
                    </svg>
                </a>
                <a href="https://twitter.com/techclubrcoem" target="_blank">
                    <svg width="58" height="45" viewBox="0 0 58 45" fill="none" xmlns="http://www.w3.org/2000/svg">
                        <path
                            d="M58 5.94414C55.8182 6.83008 53.5108 7.41887 51.1488 7.69239C53.6379 6.3175 55.4991 4.14041 56.3796 1.57351C54.0488 2.86052 51.4987 3.76684 48.8396 4.25326C47.2093 2.63251 45.093 1.50574 42.7659 1.01932C40.4388 0.532896 38.0083 0.70932 35.7903 1.52567C33.5722 2.34201 31.6692 3.76055 30.3283 5.59697C28.9874 7.43339 28.2707 9.60281 28.2714 11.8234C28.2714 12.7009 28.3511 13.5446 28.5469 14.3479C23.8165 14.132 19.1884 12.9889 14.9651 10.9935C10.7418 8.99813 7.01834 6.19529 4.03825 2.76826C2.51147 5.20453 2.03946 8.091 2.71833 10.8399C3.3972 13.5888 5.1759 15.9935 7.69225 17.5643C5.81 17.5173 3.96747 17.0496 2.32 16.2008V16.3223C2.32315 18.8786 3.27216 21.3559 5.00728 23.3371C6.74239 25.3183 9.15765 26.6824 11.8465 27.1999C10.8293 27.4495 9.78092 27.5721 8.729 27.5644C7.97351 27.5769 7.21877 27.5135 6.47787 27.3754C7.24616 29.5726 8.72715 31.494 10.7169 32.8751C12.7067 34.2562 15.1074 35.0291 17.5885 35.0873C13.3797 38.1519 8.18878 39.8144 2.84563 39.8089C1.8705 39.8089 0.93525 39.7684 0 39.657C5.43707 42.9191 11.7728 44.6446 18.241 44.625C40.1215 44.625 52.084 27.75 52.084 13.1228C52.084 12.6334 52.0659 12.1609 52.0405 11.6918C54.3857 10.1291 56.4053 8.18136 58 5.94414Z"
                            fill="black" />
                    </svg>
                </a>

            </div>
        </div>

        <div class="contact-container">
            <h1>Get in <span>touch</span> !</h1>

            <form onsubmit="sendMessage(this)" action="javascript:void(0)" id="contact-form" autocomplete="on">

                <div class="inp-holder">
                    <label for="name">Your name</label>
                    <input type="text" name="name" placeholder="John doe" required>
                </div>

                <div class="inp-holder">
                    <label for="mail">Your Mail</label>
                    <input type="email" name="mail" placeholder="abc@gmail.com" required>
                </div>

                <div class="inp-holder">
                    <label for="msg">Message</label>
                    <textarea name="msg" id="msg" placeholder="Please type your message here..." required></textarea>
                </div>

                <button type="submit" name="submit">Submit</button>
            </form>
        </div>


    <script>
        const postData = async (data = {}) => {
            const url = 'https://mjcontact-form.glitch.me/send-mail'
            const response = await fetch(url, {
                method: 'POST',
                mode: 'cors',
                headers: {
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify(data)
            });
            return response.json();
        }

        const sendMessage = async (form) => {
            let formData = {
                name: document.getElementsByName("name")[0].value,
                mail: document.getElementsByName("mail")[0].value,
                msg: document.getElementsByName("msg")[0].value,
                to: "technicalclub@rknec.edu"
            }

            console.log(formData);
            let res = await postData(formData)
            console.log(res);
        }
    </script>
    `

        const linkElem = document.createElement('link')
        linkElem.setAttribute('rel', 'stylesheet')
        linkElem.setAttribute('href', './contact-us/contact.min.css')

        this.shadowRoot.append(linkElem, wrapper)
    }
}

// custom component navBar
window.customElements.define('footer-bar', footerBar)
