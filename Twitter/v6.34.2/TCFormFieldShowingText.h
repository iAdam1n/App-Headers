/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TCFormField.h>

@class NSString, TCVector4, UIFont, UIColor;

@interface TCFormFieldShowingText : TCFormField {

	BOOL _fontBold;
	BOOL _fontItalic;
	BOOL _fontUnderline;
	float _fontSize;
	NSString* _fontName;
	TCVector4* _color;

}

@property (nonatomic,copy) NSString * fontName;                  //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) float fontSize;                     //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL fontBold;                      //@synthesize fontBold=_fontBold - In the implementation block
@property (assign,nonatomic) BOOL fontItalic;                    //@synthesize fontItalic=_fontItalic - In the implementation block
@property (assign,nonatomic) BOOL fontUnderline;                 //@synthesize fontUnderline=_fontUnderline - In the implementation block
@property (nonatomic,retain) TCVector4 * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,readonly) UIColor * textColor; 
+(id)_fontsByNameAndType;
+(id)_fontNameWithBaseName:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(void)setFontBold:(BOOL)arg1 ;
-(void)setFontItalic:(BOOL)arg1 ;
-(void)setFontUnderline:(BOOL)arg1 ;
-(id)backstopValueForStyleProperty:(long long)arg1 ;
-(long long)sizingStyleMask;
-(BOOL)fontBold;
-(BOOL)fontItalic;
-(BOOL)fontUnderline;
-(id)_styledColor;
-(BOOL)_styledFontUnderline;
-(id)_styledFontName;
-(float)_styledFontSize;
-(BOOL)_styledFontBold;
-(BOOL)_styledFontItalic;
-(UIFont *)font;
-(BOOL)isEditing;
-(UIColor *)textColor;
-(void)beginEditing;
-(TCVector4 *)color;
-(NSString *)fontName;
-(void)setColor:(TCVector4 *)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(float)fontSize;
@end

