/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TGCacheFileDesc : NSObject {

	int _date;
	NSString* _filePath;

}

@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) int date;                         //@synthesize date=_date - In the implementation block
-(id)initWithFilePath:(id)arg1 date:(int)arg2 ;
-(int)date;
-(void)setDate:(int)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end

