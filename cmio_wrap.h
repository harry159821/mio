/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_cmio_WRAP_H_
#define SWIG_cmio_WRAP_H_

#include <map>
#include <string>


class SwigDirector_MeshVisitor : public mio::geometry::MeshVisitor, public Swig::Director {

public:
    SwigDirector_MeshVisitor(PyObject *self);
    virtual ~SwigDirector_MeshVisitor();
    virtual void visit_IndexedMesh(mio::geometry::IndexedMesh *mesh);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class MeshVisitor doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_MaterialVisitor : public mio::material::MaterialVisitor, public Swig::Director {

public:
    SwigDirector_MaterialVisitor(PyObject *self);
    virtual ~SwigDirector_MaterialVisitor();
    virtual void visit_PhongMaterial(mio::material::PhongMaterial *material);
    virtual void visit_TexturedPhongMaterial(mio::material::TexturedPhongMaterial *material);
    virtual void visit_MqoMaterial(mio::material::MqoMaterial *material);
    virtual void visit_TexturedMqoMaterial(mio::material::TexturedMqoMaterial *material);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class MaterialVisitor doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[4];
#endif

};


class SwigDirector_MaterialMappingVisitor : public mio::material::MaterialMappingVisitor, public Swig::Director {

public:
    SwigDirector_MaterialMappingVisitor(PyObject *self);
    virtual ~SwigDirector_MaterialMappingVisitor();
    virtual void visit_ByPolygonMaterialMapping(mio::material::MaterialMapping *mapping);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class MaterialMappingVisitor doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_TextureVisitor : public mio::texture::TextureVisitor, public Swig::Director {

public:
    SwigDirector_TextureVisitor(PyObject *self);
    virtual ~SwigDirector_TextureVisitor();
    virtual void visit_ILTexture(mio::texture::ILTexture *texture);
    virtual void visit_LazyILTexture(mio::texture::LazyILTexture *texture);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class TextureVisitor doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[2];
#endif

};


class SwigDirector_TextureMappingVisitor : public mio::texture::TextureMappingVisitor, public Swig::Director {

public:
    SwigDirector_TextureMappingVisitor(PyObject *self);
    virtual ~SwigDirector_TextureMappingVisitor();
    virtual void visit_IndexedTextureMapping(mio::texture::IndexedTextureMapping *mapping);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class TextureMappingVisitor doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_OmniVisitor : public mio::visitor::OmniVisitor, public Swig::Director {

public:
    SwigDirector_OmniVisitor(PyObject *self);
    virtual ~SwigDirector_OmniVisitor();
    virtual void visit_SimplePrimitive(mio::scenegraph::SimplePrimitive *primitive);
    virtual void visit_Group(mio::scenegraph::Group *group);
    virtual void visit_TransformNode(mio::scenegraph::TransformNode *transformNode);
    virtual void visit_RiggedPrimitive(mio::scenegraph::RiggedPrimitive *primitive);
    virtual void visit_PhongMaterial(mio::material::PhongMaterial *material);
    virtual void visit_TexturedPhongMaterial(mio::material::TexturedPhongMaterial *material);
    virtual void visit_MqoMaterial(mio::material::MqoMaterial *material);
    virtual void visit_TexturedMqoMaterial(mio::material::TexturedMqoMaterial *material);
    virtual void visit_ByPolygonMaterialMapping(mio::material::MaterialMapping *mapping);
    virtual void visit_ILTexture(mio::texture::ILTexture *texture);
    virtual void visit_LazyILTexture(mio::texture::LazyILTexture *texture);
    virtual void visit_IndexedTextureMapping(mio::texture::IndexedTextureMapping *mapping);
    virtual void visit_IndexedMesh(mio::geometry::IndexedMesh *mesh);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class OmniVisitor doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[13];
#endif

};


#endif
