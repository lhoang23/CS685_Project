# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tuw_object_msgs/ObjectDetection.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg
import tuw_object_msgs.msg

class ObjectDetection(genpy.Message):
  _md5sum = "cea12636c449cb6bd42fd7019d49b395"
  _type = "tuw_object_msgs/ObjectDetection"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# This expresses a object detection
Header header                                 # timestamp in the header is the acquisition time and frame

float32 distance_min                          # distance minimum range value [m]
float32 distance_max                          # distance maximum range value [m]
float32 distance_max_id                       # distance maximum range value to detect id [m]

geometry_msgs/Quaternion view_direction       # view direction
float32 fov_horizontal                        # field of view horizontal [rad]
float32 fov_vertical                          # field of view vertical [rad]

string   type                                 # object type used (person, obstacle, ...)

ObjectWithCovariance[] objects                # detected objects (with covariance)

string          sensor_type                      # Sensor / detector type, see example constants below.

# object type constants
string OBJECT_TYPE_PERSON = person
string OBJECT_TYPE_OBSTACLE = obstacle
string OBJECT_TYPE_TRAFFIC_CONE = traffic_cone
string OBJECT_TYPE_DOOR = door

# sensor type constants
string          SENSOR_TYPE_GENERIC_LASER_2D = laser2d
string          SENSOR_TYPE_GENERIC_LASER_3D = laser3d
string          SENSOR_TYPE_GENERIC_MONOCULAR_VISION = mono
string          SENSOR_TYPE_GENERIC_STEREO_VISION = stereo
string          SENSOR_TYPE_GENERIC_RGBD = rgbd

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: tuw_object_msgs/ObjectWithCovariance
# This expresses a object in free space with uncertainty.

Object object

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)

float64[] covariance_pose   # pose covariance if it exists it will be 3x3 or 6x6
float64[] covariance_twist  # twist covariance if it exists it will be 3x3 or 6x6
float64[] correlation       # correlation between pose and twist if it exists it will be 3x3 or 6x6
================================================================================
MSG: tuw_object_msgs/Object
# This expresses a object in a 3D space
int32[] ids                  # possible ids of the detected object (empty if no id could be identified/assigned)
int32   shape                # shape type (possible types are listed below)
float64[] shape_variables    # variables correspoding to the shape of the object (possible types are listed below)
float64[] ids_confidence     # confidence of the possible ids in [0, 1]
geometry_msgs/Pose pose      # pose of the detected object
geometry_msgs/Twist twist    # twist of the detected object

# SHAPE_TYPE                      # SHAPE_VARIABLES
# ====================================================
int32 SHAPE_UNKOWN           = 0  # []
int32 SHAPE_POINT            = 1  # []
int32 SHAPE_CIRCLE           = 2  # [radius]
int32 SHAPE_ELLIPSE          = 3  # [radius1, radius2]
int32 SHAPE_SQUARE           = 4  # [width]
int32 SHAPE_RECTANGLE        = 5  # [length, width]
int32 SHAPE_HULL             = 6  # [p0, p1, p2, ...]
int32 SHAPE_LINE             = 7  # [] or [length] 

int32 SHAPE_SPHERE           = 102
int32 SHAPE_ELLIPSOID        = 103
int32 SHAPE_CUBE             = 104
int32 SHAPE_BOX              = 105
int32 SHAPE_MESH             = 106

int32 SHAPE_TRAFFIC_CONE     = 201 # [radius, color(1 = blue, 2 = yellow, 3 = red)] 
int32 SHAPE_DOOR             = 202 # [width, height, opening angle (0=closed), nr of door leafs, clockwise (0) counterclockwise (1)]
int32 SHAPE_MAP_DOOR         = 212 # for doors already mapped, same parameters as usual door
int32 SHAPE_PERSON           = 203
int32 SHAPE_VEHICLE          = 204
int32 SHAPE_FIDUCIAL         = 205
int32 SHAPE_CONE             = 206 # [radius, height]

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  # Pseudo-constants
  OBJECT_TYPE_PERSON = 'person'
  OBJECT_TYPE_OBSTACLE = 'obstacle'
  OBJECT_TYPE_TRAFFIC_CONE = 'traffic_cone'
  OBJECT_TYPE_DOOR = 'door'
  SENSOR_TYPE_GENERIC_LASER_2D = 'laser2d'
  SENSOR_TYPE_GENERIC_LASER_3D = 'laser3d'
  SENSOR_TYPE_GENERIC_MONOCULAR_VISION = 'mono'
  SENSOR_TYPE_GENERIC_STEREO_VISION = 'stereo'
  SENSOR_TYPE_GENERIC_RGBD = 'rgbd'

  __slots__ = ['header','distance_min','distance_max','distance_max_id','view_direction','fov_horizontal','fov_vertical','type','objects','sensor_type']
  _slot_types = ['std_msgs/Header','float32','float32','float32','geometry_msgs/Quaternion','float32','float32','string','tuw_object_msgs/ObjectWithCovariance[]','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,distance_min,distance_max,distance_max_id,view_direction,fov_horizontal,fov_vertical,type,objects,sensor_type

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjectDetection, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.distance_min is None:
        self.distance_min = 0.
      if self.distance_max is None:
        self.distance_max = 0.
      if self.distance_max_id is None:
        self.distance_max_id = 0.
      if self.view_direction is None:
        self.view_direction = geometry_msgs.msg.Quaternion()
      if self.fov_horizontal is None:
        self.fov_horizontal = 0.
      if self.fov_vertical is None:
        self.fov_vertical = 0.
      if self.type is None:
        self.type = ''
      if self.objects is None:
        self.objects = []
      if self.sensor_type is None:
        self.sensor_type = ''
    else:
      self.header = std_msgs.msg.Header()
      self.distance_min = 0.
      self.distance_max = 0.
      self.distance_max_id = 0.
      self.view_direction = geometry_msgs.msg.Quaternion()
      self.fov_horizontal = 0.
      self.fov_vertical = 0.
      self.type = ''
      self.objects = []
      self.sensor_type = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3f4d2f().pack(_x.distance_min, _x.distance_max, _x.distance_max_id, _x.view_direction.x, _x.view_direction.y, _x.view_direction.z, _x.view_direction.w, _x.fov_horizontal, _x.fov_vertical))
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.objects:
        _v1 = val1.object
        length = len(_v1.ids)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(struct.Struct(pattern).pack(*_v1.ids))
        _x = _v1.shape
        buff.write(_get_struct_i().pack(_x))
        length = len(_v1.shape_variables)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.Struct(pattern).pack(*_v1.shape_variables))
        length = len(_v1.ids_confidence)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.Struct(pattern).pack(*_v1.ids_confidence))
        _v2 = _v1.pose
        _v3 = _v2.position
        _x = _v3
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v4 = _v2.orientation
        _x = _v4
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _v5 = _v1.twist
        _v6 = _v5.linear
        _x = _v6
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v7 = _v5.angular
        _x = _v7
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        length = len(val1.covariance_pose)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.Struct(pattern).pack(*val1.covariance_pose))
        length = len(val1.covariance_twist)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.Struct(pattern).pack(*val1.covariance_twist))
        length = len(val1.correlation)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.Struct(pattern).pack(*val1.correlation))
      _x = self.sensor_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.view_direction is None:
        self.view_direction = geometry_msgs.msg.Quaternion()
      if self.objects is None:
        self.objects = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 52
      (_x.distance_min, _x.distance_max, _x.distance_max_id, _x.view_direction.x, _x.view_direction.y, _x.view_direction.z, _x.view_direction.w, _x.fov_horizontal, _x.fov_vertical,) = _get_struct_3f4d2f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.objects = []
      for i in range(0, length):
        val1 = tuw_object_msgs.msg.ObjectWithCovariance()
        _v8 = val1.object
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        _v8.ids = s.unpack(str[start:end])
        start = end
        end += 4
        (_v8.shape,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        _v8.shape_variables = s.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        _v8.ids_confidence = s.unpack(str[start:end])
        _v9 = _v8.pose
        _v10 = _v9.position
        _x = _v10
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v11 = _v9.orientation
        _x = _v11
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _v12 = _v8.twist
        _v13 = _v12.linear
        _x = _v13
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v14 = _v12.angular
        _x = _v14
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.covariance_pose = s.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.covariance_twist = s.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.correlation = s.unpack(str[start:end])
        self.objects.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sensor_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sensor_type = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3f4d2f().pack(_x.distance_min, _x.distance_max, _x.distance_max_id, _x.view_direction.x, _x.view_direction.y, _x.view_direction.z, _x.view_direction.w, _x.fov_horizontal, _x.fov_vertical))
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.objects:
        _v15 = val1.object
        length = len(_v15.ids)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(_v15.ids.tostring())
        _x = _v15.shape
        buff.write(_get_struct_i().pack(_x))
        length = len(_v15.shape_variables)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(_v15.shape_variables.tostring())
        length = len(_v15.ids_confidence)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(_v15.ids_confidence.tostring())
        _v16 = _v15.pose
        _v17 = _v16.position
        _x = _v17
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v18 = _v16.orientation
        _x = _v18
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _v19 = _v15.twist
        _v20 = _v19.linear
        _x = _v20
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v21 = _v19.angular
        _x = _v21
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        length = len(val1.covariance_pose)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.covariance_pose.tostring())
        length = len(val1.covariance_twist)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.covariance_twist.tostring())
        length = len(val1.correlation)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.correlation.tostring())
      _x = self.sensor_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.view_direction is None:
        self.view_direction = geometry_msgs.msg.Quaternion()
      if self.objects is None:
        self.objects = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 52
      (_x.distance_min, _x.distance_max, _x.distance_max_id, _x.view_direction.x, _x.view_direction.y, _x.view_direction.z, _x.view_direction.w, _x.fov_horizontal, _x.fov_vertical,) = _get_struct_3f4d2f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.objects = []
      for i in range(0, length):
        val1 = tuw_object_msgs.msg.ObjectWithCovariance()
        _v22 = val1.object
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        _v22.ids = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
        start = end
        end += 4
        (_v22.shape,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        _v22.shape_variables = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        _v22.ids_confidence = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        _v23 = _v22.pose
        _v24 = _v23.position
        _x = _v24
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v25 = _v23.orientation
        _x = _v25
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _v26 = _v22.twist
        _v27 = _v26.linear
        _x = _v27
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v28 = _v26.angular
        _x = _v28
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.covariance_pose = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.covariance_twist = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.correlation = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        self.objects.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sensor_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sensor_type = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_3f4d2f = None
def _get_struct_3f4d2f():
    global _struct_3f4d2f
    if _struct_3f4d2f is None:
        _struct_3f4d2f = struct.Struct("<3f4d2f")
    return _struct_3f4d2f
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i