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

@interface SKPExpressionStoreViewStylesheet : MKGlobalStylesheet

@property (nonatomic,readonly) double contentTopInset; 
@property (nonatomic,readonly) UIColor * separatorColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) double searchBarHeight; 
@property (nonatomic,readonly) double searchBarHorizontalMargin; 
-(double)searchBarHeight;
-(double)searchBarHorizontalMargin;
-(id)backgroundColorForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(id)backgroundColorForTraitCollection:(id)arg1 ;
-(id)separatorColorForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(id)separatorColorForTraitCollection:(id)arg1 ;
-(double)contentTopInsetForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)searchBarHeightForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)searchBarHorizontalMarginForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)contentTopInset;
-(double)contentTopInsetForTraitCollection:(id)arg1 ;
-(double)searchBarHeightForTraitCollection:(id)arg1 ;
-(double)searchBarHorizontalMarginForTraitCollection:(id)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)separatorColor;
@end
