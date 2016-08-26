/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/MKGlobalStylesheet.h>

@class UIColor;

@interface MKTableViewStylesheet : MKGlobalStylesheet

@property (nonatomic,readonly) UIColor * backgroundColorPlainStyle; 
@property (nonatomic,readonly) UIColor * backgroundColorGroupedStyle; 
@property (nonatomic,readonly) UIColor * separatorColor; 
-(id)separatorColorForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(id)separatorColorForTraitCollection:(id)arg1 ;
-(id)backgroundColorPlainStyleForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(id)backgroundColorGroupedStyleForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(UIColor *)backgroundColorPlainStyle;
-(id)backgroundColorPlainStyleForTraitCollection:(id)arg1 ;
-(UIColor *)backgroundColorGroupedStyle;
-(id)backgroundColorGroupedStyleForTraitCollection:(id)arg1 ;
-(UIColor *)separatorColor;
@end
