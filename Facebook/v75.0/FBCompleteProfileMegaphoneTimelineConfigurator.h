/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompleteProfileMegaphoneConfigurator.h>

@class CAShapeLayer;

@interface FBCompleteProfileMegaphoneTimelineConfigurator : FBCompleteProfileMegaphoneConfigurator {

	CAShapeLayer* _borderLayer;

}
+(BOOL)shouldShowTimelinephoneWithSession:(id)arg1 ;
-(id)newFooterWithFrame:(CGRect)arg1 ;
-(double)typeaheadCellHeight;
-(double)inferenceCellExpandedHeight;
-(double)confirmationCellHeight;
-(BOOL)showQuestionCell;
-(CGSize)closeButtonInset;
-(double)accessoryQuestionViewHeight;
-(id)newInferenceCellWithReusedIdentifier:(id)arg1 ;
-(id)newTypeaheadCellWithReusedIdentifier:(id)arg1 ;
-(id)newShadowViewWithFrame:(CGRect)arg1 ;
-(id)newBorderLayer;
-(id)newAccessoryQuestionViewWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(double)contentInset;
-(int)initialState;
-(double)footerHeight;
-(id)surface;
@end
