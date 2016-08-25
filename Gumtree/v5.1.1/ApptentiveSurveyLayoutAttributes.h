/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class UIColor;

@interface ApptentiveSurveyLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _valid;
	UIColor* _validColor;
	UIColor* _invalidColor;
	UIColor* _backgroundColor;

}

@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) UIColor * validColor;                   //@synthesize validColor=_validColor - In the implementation block
@property (nonatomic,retain) UIColor * invalidColor;                 //@synthesize invalidColor=_invalidColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(UIColor *)validColor;
-(UIColor *)invalidColor;
-(void)setValidColor:(UIColor *)arg1 ;
-(void)setInvalidColor:(UIColor *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValid:(BOOL)arg1 ;
@end

