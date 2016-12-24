/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TGPhotoPaintFont : NSObject {

	NSString* _title;
	double _titleInset;
	NSString* _fontName;
	NSString* _previewFontName;
	double _sizeCorrection;

}

@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) double titleInset;                       //@synthesize titleInset=_titleInset - In the implementation block
@property (nonatomic,readonly) NSString * fontName;                     //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) NSString * previewFontName;              //@synthesize previewFontName=_previewFontName - In the implementation block
@property (nonatomic,readonly) double sizeCorrection;                   //@synthesize sizeCorrection=_sizeCorrection - In the implementation block
+(id)availableFonts;
+(id)fontWithTitle:(id)arg1 titleInset:(double)arg2 fontName:(id)arg3 previewFontName:(id)arg4 sizeCorrection:(double)arg5 ;
-(double)sizeCorrection;
-(NSString *)previewFontName;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)fontName;
-(double)titleInset;
@end
