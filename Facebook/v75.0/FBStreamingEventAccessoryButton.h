/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBButtonWithExtendedTapTarget.h>

@interface FBStreamingEventAccessoryButton : FBButtonWithExtendedTapTarget {

	unsigned long long _style;
	unsigned long long _glyphName;

}

@property (assign,nonatomic) unsigned long long style;                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long glyphName;              //@synthesize glyphName=_glyphName - In the implementation block
-(void)setGlyphName:(unsigned long long)arg1 ;
-(unsigned long long)glyphName;
-(unsigned long long)style;
-(void)_updateStyle;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
@end

