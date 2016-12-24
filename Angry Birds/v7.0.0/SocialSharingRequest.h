/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/SocialServiceRequest.h>

@class NSString, NSURL, NSMutableDictionary;

@interface SocialSharingRequest : SocialServiceRequest {

	int _sharingType;
	NSString* _title;
	NSString* _text;
	NSURL* _imageURL;
	NSURL* _url;
	NSMutableDictionary* _serviceMentions;

}

@property (assign,nonatomic) int sharingType;                                    //@synthesize sharingType=_sharingType - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                   //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serviceMentions;              //@synthesize serviceMentions=_serviceMentions - In the implementation block
-(int)sharingType;
-(void)setSharingType:(int)arg1 ;
-(NSMutableDictionary *)serviceMentions;
-(void)setServiceMentions:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end
