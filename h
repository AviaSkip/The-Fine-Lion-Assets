    if let phoneURL = NSURL(string: ("tel://" + phoneNumber)) {

        let alert = UIAlertController(title: ("Call " + phoneNumber + "?"), message: nil, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "Call", style: .default, handler: { (action) in
            UIApplication.shared.open(phoneURL as URL, options: [:], completionHandler: nil)
        }))

        alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        self.present(alert, animated: true, completion: nil)
    }
}
