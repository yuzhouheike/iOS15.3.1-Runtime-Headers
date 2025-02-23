/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities
 */

@interface DMCKeychain : NSObject

+ (struct __CFDictionary { }*)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 outError:(id*)arg7;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (id)copyCertificatesWithPersistentIDs:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (const void*)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 enforcePersonalPersona:(bool)arg7 outError:(id*)arg8;
+ (id)dataFromString:(id)arg1;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(bool)arg5 enforcePersonalPersona:(bool)arg6 group:(id)arg7;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(bool)arg4 enforcePersonalPersona:(bool)arg5;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(bool)arg8 sysBound:(bool)arg9 enforcePersonalPersona:(bool)arg10 outError:(id*)arg11;
+ (id)stringFromServiceData:(id)arg1;

@end
