;; Auto-generated. Do not edit!


(when (boundp 'serialPort::GPS)
  (if (not (find-package "SERIALPORT"))
    (make-package "SERIALPORT"))
  (shadow 'GPS (find-package "SERIALPORT")))
(unless (find-package "SERIALPORT::GPS")
  (make-package "SERIALPORT::GPS"))

(in-package "ROS")
;;//! \htmlinclude GPS.msg.html


(defclass serialPort::GPS
  :super ros::object
  :slots (_lat _lon ))

(defmethod serialPort::GPS
  (:init
   (&key
    ((:lat __lat) 0.0)
    ((:lon __lon) 0.0)
    )
   (send-super :init)
   (setq _lat (float __lat))
   (setq _lon (float __lon))
   self)
  (:lat
   (&optional __lat)
   (if __lat (setq _lat __lat)) _lat)
  (:lon
   (&optional __lon)
   (if __lon (setq _lon __lon)) _lon)
  (:serialization-length
   ()
   (+
    ;; float32 _lat
    4
    ;; float32 _lon
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _lat
       (sys::poke _lat (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _lon
       (sys::poke _lon (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _lat
     (setq _lat (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _lon
     (setq _lon (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get serialPort::GPS :md5sum-) "c24029cbb90b28da08009a1a44081308")
(setf (get serialPort::GPS :datatype-) "serialPort/GPS")
(setf (get serialPort::GPS :definition-)
      "float32 lat
float32 lon

")



(provide :serialPort/GPS "c24029cbb90b28da08009a1a44081308")


