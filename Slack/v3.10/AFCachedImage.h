/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString, NSDate;

@interface AFCachedImage : NSObject {

	UIImage* _image;
	NSString* _identifier;
	unsigned long long _totalBytes;
	NSDate* _lastAccessDate;
	unsigned long long _currentMemoryUsage;

}

@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                      //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,retain) NSDate * lastAccessDate;                            //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
@property (assign,nonatomic) unsigned long long currentMemoryUsage;              //@synthesize currentMemoryUsage=_currentMemoryUsage - In the implementation block
-(id)initWithImage:(id)arg1 identifier:(id)arg2 ;
-(id)accessImage;
-(void)setCurrentMemoryUsage:(unsigned long long)arg1 ;
-(unsigned long long)currentMemoryUsage;
-(void)setImage:(UIImage *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalBytes;
-(void)setLastAccessDate:(NSDate *)arg1 ;
-(NSDate *)lastAccessDate;
@end
