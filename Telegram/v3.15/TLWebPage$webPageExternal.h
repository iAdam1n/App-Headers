/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLWebPage.h>

@class NSString;

@interface TLWebPage$webPageExternal : TLWebPage {

	int _flags;
	int _w;
	int _h;
	int _duration;
	NSString* _url;
	NSString* _display_url;
	NSString* _type;
	NSString* _title;
	NSString* _n_description;
	NSString* _thumb_url;
	NSString* _contentUrl;
	NSString* _contentType;

}

@property (assign,nonatomic) int flags;                             //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * display_url;                //@synthesize display_url=_display_url - In the implementation block
@property (nonatomic,retain) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * n_description;              //@synthesize n_description=_n_description - In the implementation block
@property (nonatomic,retain) NSString * thumb_url;                  //@synthesize thumb_url=_thumb_url - In the implementation block
@property (nonatomic,retain) NSString * contentUrl;                 //@synthesize contentUrl=_contentUrl - In the implementation block
@property (nonatomic,retain) NSString * contentType;                //@synthesize contentType=_contentType - In the implementation block
@property (assign,w,nonatomic) int w;                               //@synthesize w=_w - In the implementation block
@property (assign,h,nonatomic) int h;                               //@synthesize h=_h - In the implementation block
@property (assign,nonatomic) int duration;                          //@synthesize duration=_duration - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(NSString *)n_description;
-(NSString *)thumb_url;
-(NSString *)display_url;
-(void)setN_description:(NSString *)arg1 ;
-(void)setThumb_url:(NSString *)arg1 ;
-(void)setDisplay_url:(NSString *)arg1 ;
-(void)setContentUrl:(NSString *)arg1 ;
-(NSString *)contentUrl;
-(void)setContentType:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(int)duration;
-(NSString *)url;
-(NSString *)title;
-(void)setDuration:(int)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUrl:(NSString *)arg1 ;
-(int)w;
-(int)h;
-(void)setW:(int)arg1 ;
-(void)setH:(int)arg1 ;
-(NSString *)contentType;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
