/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailBaseTableViewCell.h>

@class OASAppContext, UILabel, UIViewController;

@interface OAAppDetailUnsubscribeTableViewCell : OAAppDetailBaseTableViewCell {

	OASAppContext* _appContext;
	UILabel* _unsubscribeLabel;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) OASAppContext * appContext;                                  //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic,__weak) UILabel * unsubscribeLabel;                           //@synthesize unsubscribeLabel=_unsubscribeLabel - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
-(UILabel *)unsubscribeLabel;
-(void)unsubscribe;
-(void)cellWasTapped:(id)arg1 ;
-(void)setUnsubscribeLabel:(UILabel *)arg1 ;
-(UIViewController *)parentViewController;
-(void)awakeFromNib;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setAppContext:(OASAppContext *)arg1 ;
-(OASAppContext *)appContext;
@end
