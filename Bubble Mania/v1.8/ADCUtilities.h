/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADCUtilities : NSObject
+(id)getOrCreateAdColonyFilePath:(id)arg1 withFileName:(id)arg2 ;
+(id)appBundleInfo;
+(id)stripPlist:(id)arg1 ;
+(id)getUUID;
+(id)serializeJSONObjectToData:(id)arg1 ;
+(id)deserializeJSONData:(id)arg1 ;
+(id)mutableCopyRecursive:(id)arg1 ;
+(void)addSkipBackupAttributeToPath:(id)arg1 ;
+(id)getOrCreateAdColonyTempFilePath:(id)arg1 withFileName:(id)arg2 ;
+(void)adcEncodeFile:(id)arg1 ;
+(void)adcDecodeFile:(id)arg1 ;
+(id)dateFromHTML5String:(id)arg1 ;
+(id)deserializeJSONString:(id)arg1 ;
+(id)serializeJSONObjectToString:(id)arg1 ;
+(void)deleteFile:(id)arg1 ;
+(id)sha1:(id)arg1 ;
@end

