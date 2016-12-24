/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/PGCustomToolValue.h>

@class UIColor, NSString;

@interface PGTintToolValue : NSObject <PGCustomToolValue> {

	BOOL _editingHighlights;
	BOOL _editingIntensity;
	UIColor* _shadowsColor;
	UIColor* _highlightsColor;
	double _shadowsIntensity;
	double _highlightsIntensity;

}

@property (assign,nonatomic) UIColor * shadowsColor;                  //@synthesize shadowsColor=_shadowsColor - In the implementation block
@property (assign,nonatomic) UIColor * highlightsColor;               //@synthesize highlightsColor=_highlightsColor - In the implementation block
@property (assign,nonatomic) double shadowsIntensity;                 //@synthesize shadowsIntensity=_shadowsIntensity - In the implementation block
@property (assign,nonatomic) double highlightsIntensity;              //@synthesize highlightsIntensity=_highlightsIntensity - In the implementation block
@property (assign,nonatomic) BOOL editingHighlights;                  //@synthesize editingHighlights=_editingHighlights - In the implementation block
@property (assign,nonatomic) BOOL editingIntensity;                   //@synthesize editingIntensity=_editingIntensity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cleanValue;
-(UIColor *)shadowsColor;
-(void)setShadowsColor:(UIColor *)arg1 ;
-(double)shadowsIntensity;
-(void)setShadowsIntensity:(double)arg1 ;
-(UIColor *)highlightsColor;
-(void)setHighlightsColor:(UIColor *)arg1 ;
-(double)highlightsIntensity;
-(void)setHighlightsIntensity:(double)arg1 ;
-(BOOL)editingHighlights;
-(void)setEditingHighlights:(BOOL)arg1 ;
-(BOOL)editingIntensity;
-(void)setEditingIntensity:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
