/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGInstantPageBlock.h>

@class NSString, TGRichText;

@interface TGInstantPageBlockEmbed : TGInstantPageBlock {

	BOOL _fillWidth;
	BOOL _enableScrolling;
	NSString* _url;
	NSString* _html;
	TGRichText* _caption;
	CGSize _size;

}

@property (nonatomic,readonly) NSString * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * html;                   //@synthesize html=_html - In the implementation block
@property (nonatomic,readonly) TGRichText * caption;              //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL fillWidth;                    //@synthesize fillWidth=_fillWidth - In the implementation block
@property (nonatomic,readonly) BOOL enableScrolling;              //@synthesize enableScrolling=_enableScrolling - In the implementation block
-(id)initWithUrl:(id)arg1 html:(id)arg2 caption:(id)arg3 size:(CGSize)arg4 fillWidth:(BOOL)arg5 enableScrolling:(BOOL)arg6 ;
-(BOOL)fillWidth;
-(BOOL)enableScrolling;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)url;
-(TGRichText *)caption;
-(NSString *)html;
@end
