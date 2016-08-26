/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBForceTouchIntentProvider.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBFriendingToolbox, FBMemPerson, NSString;

@interface FBHScrollPYMKCellComponent : CKCompositeComponent <FBForceTouchIntentProvider, FBHScrollImpressionLogging> {

	FBFriendingToolbox* _toolbox;
	SEL _xoutAction;
	FBMemPerson* _person;

}

@property (nonatomic,retain) FBMemPerson * person;                  //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(FBActionableCellComponentLayoutConfiguration)layoutConfigurationForBigSizePYMKCard;
+(id)newWithPerson:(id)arg1 socialContextVariants:(id)arg2 requestHowFound:(id)arg3 cancelRef:(id)arg4 pymkLocation:(id)arg5 backgroundAction:(SEL)arg6 addFriendButtonAction:(SEL)arg7 cancelRequestButtonAction:(SEL)arg8 xoutButtonAction:(SEL)arg9 enableRemoveButton:(BOOL)arg10 withCardBorder:(BOOL)arg11 layoutConfiguration:(FBActionableCellComponentLayoutConfiguration)arg12 buttonStyle:(unsigned long long)arg13 toolbox:(id)arg14 ;
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(void)didTapXout;
-(void)setPerson:(FBMemPerson *)arg1 ;
-(FBMemPerson *)person;
@end
