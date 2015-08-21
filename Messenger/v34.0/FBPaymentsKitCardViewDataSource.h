/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class UITableViewCell, FBPaymentsKitCardInfoView, NSString;

@interface FBPaymentsKitCardViewDataSource : NSObject <UITableViewDataSource> {

	BOOL _isAddingCard;
	BOOL _isPrimaryCard;
	BOOL _isConnected;
	BOOL _shouldShowActions;
	long long _flowMode;
	long long _presentingMode;
	UITableViewCell* _infoCell;
	UITableViewCell* _makePrimaryCell;
	UITableViewCell* _deleteCell;
	FBPaymentsKitCardInfoView* _infoView;

}

@property (nonatomic,readonly) FBPaymentsKitCardInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_infoCell;
-(id)_makePrimaryCell;
-(id)_deleteCell;
-(id)configureWithCard:(id)arg1 isPrimaryCard:(BOOL)arg2 flowMode:(long long)arg3 configuration:(id)arg4 ;
-(void)configureWithConnectionStatus:(BOOL)arg1 ;
-(FBPaymentsKitCardInfoView *)infoView;
-(void)dealloc;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

