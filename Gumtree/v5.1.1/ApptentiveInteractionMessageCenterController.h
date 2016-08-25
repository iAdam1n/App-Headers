/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ApptentiveMessageCenterInteraction, UIViewController;

@interface ApptentiveInteractionMessageCenterController : NSObject {

	ApptentiveMessageCenterInteraction* _interaction;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) ApptentiveMessageCenterInteraction * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                               //@synthesize viewController=_viewController - In the implementation block
-(id)initWithInteraction:(id)arg1 ;
-(void)showMessageCenterFromViewController:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(ApptentiveMessageCenterInteraction *)interaction;
@end

