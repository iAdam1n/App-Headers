/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIButton.h>

@class JMActionMenuThemeConfiguration;

@interface JMActionMenuOpenButton : UIButton {

	BOOL _i_compactOpenButton;
	JMActionMenuThemeConfiguration* _themeConfiguration;

}

@property (readonly) BOOL isCompactOpenButton; 
@property (retain) JMActionMenuThemeConfiguration * themeConfiguration;              //@synthesize themeConfiguration=_themeConfiguration - In the implementation block
@property (assign) BOOL i_compactOpenButton;                                         //@synthesize i_compactOpenButton=_i_compactOpenButton - In the implementation block
-(void)setThemeConfiguration:(JMActionMenuThemeConfiguration *)arg1 ;
-(JMActionMenuThemeConfiguration *)themeConfiguration;
-(id)initWithThemeConfiguration:(id)arg1 ;
-(BOOL)isCompactOpenButton;
-(void)setI_compactOpenButton:(BOOL)arg1 ;
-(BOOL)i_compactOpenButton;
-(void)setCompactOpenButton:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

