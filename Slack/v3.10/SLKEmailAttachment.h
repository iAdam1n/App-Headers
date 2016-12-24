/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface SLKEmailAttachment : NSObject {

	NSString* _name;
	NSString* _url;
	NSString* _mimeType;
	NSNumber* _size;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * url;                   //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSNumber * size;                  //@synthesize size=_size - In the implementation block
-(void)downloadAttachmentWithCompletion:(/*^block*/id)arg1 ;
-(NSNumber *)size;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)url;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
@end
