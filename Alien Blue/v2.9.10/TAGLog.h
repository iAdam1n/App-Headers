/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TAGLog : NSObject
+(void)verbose:(id)arg1 ;
+(void)warning:(id)arg1 ;
+(void)info:(id)arg1 ;
+(void)debug:(id)arg1 ;
+(int)logLevel;
+(void)initialize;
+(void)error:(id)arg1 ;
+(id)logger;
+(void)setLogger:(id)arg1 ;
@end

