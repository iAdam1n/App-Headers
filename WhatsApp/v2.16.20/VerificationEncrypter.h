/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VerificationEncrypter : NSObject
+(void)removeRecoveryTokenFile;
+(void)removeRecoveryTokenFromKeychain;
+(id)recoveryTokenForPhoneNumber:(id)arg1 ;
+(BOOL)storeRecoveryToken:(id)arg1 forPhoneNumber:(id)arg2 ;
+(id)generateRecoveryToken;
+(id)recoveryToken;
+(BOOL)storeRecoveryToken:(id)arg1 ;
+(id)encryptionKeyFromSalt:(id)arg1 encodedSecret:(id)arg2 phoneNumberSecret:(id)arg3 ;
+(id)abbreviatedPhoneNumber:(id)arg1 ;
+(id)saltAndEncryptData:(id)arg1 saltLength:(unsigned long long)arg2 encodedSecret:(id)arg3 phoneNumberSecret:(id)arg4 ;
+(id)recoveryTokenFilePath;
+(id)decryptData:(id)arg1 saltLength:(unsigned long long)arg2 encodedSecret:(id)arg3 phoneNumberSecret:(id)arg4 ;
+(id)readRecoveryTokenFromKeychain;
+(id)recoveryTokenFromFileForPhoneNumber:(id)arg1 ;
+(void)writeRecoveryTokenToKeychain:(id)arg1 ;
+(BOOL)writeRecoveryTokenToFile:(id)arg1 ccAndPhoneNumber:(id)arg2 ;
@end
