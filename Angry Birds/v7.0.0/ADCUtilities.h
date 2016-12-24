/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADCUtilities : NSObject
+(id)sha1:(id)arg1 ;
+(id)getOrCreateAdColonyTempFilePath:(id)arg1 withFileName:(id)arg2 ;
+(id)getOrCreateAdColonyFilePath:(id)arg1 withFileName:(id)arg2 ;
+(id)appBundleInfo;
+(id)stripPlist:(id)arg1 ;
+(id)getUUID;
+(id)serializeJSONObjectToData:(id)arg1 ;
+(id)deserializeJSONData:(id)arg1 options:(unsigned long long)arg2 ;
+(void)addSkipBackupAttributeToPath:(id)arg1 ;
+(id)colorWithRGBHex:(unsigned)arg1 ;
+(id)colorWithRGBAHex:(unsigned)arg1 ;
+(id)adc_base64EncodingWeakEncrypted:(id)arg1 ;
+(id)adc_dataWithWeaklyEncryptedBase64EncodedString:(id)arg1 ;
+(id)urlEncodedString:(id)arg1 ;
+(id)adc_dataWithBase64EncodedString:(id)arg1 ;
+(id)adc_base64Encoding:(id)arg1 ;
+(id)serializeJSONObjectToString:(id)arg1 ;
+(void)adcDecodeFile:(id)arg1 ;
+(void)adcEncodeFile:(id)arg1 ;
+(id)mutableCopyRecursive:(id)arg1 ;
+(id)deserializeJSONString:(id)arg1 ;
+(id)dateFromHTML5String:(id)arg1 ;
+(void)deleteFile:(id)arg1 ;
+(id)appWindow;
+(id)colorWithHexString:(id)arg1 ;
@end
