/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIView, NSMutableArray;

@interface CKComponentViewReuseInfo : NSObject {

	UIView* _view;
	/*^block*/id _didEnterReusePoolBlock;
	/*^block*/id _willLeaveReusePoolBlock;
	NSMutableArray* _childViewInfos;
	BOOL _hidden;
	BOOL _ancestorHidden;

}
-(id)initWithView:(id)arg1 didEnterReusePoolBlock:(/*^block*/id)arg2 willLeaveReusePoolBlock:(/*^block*/id)arg3 ;
-(void)registerChildViewInfo:(id)arg1 ;
-(void)willUnhide;
-(void)ancestorDidHide;
-(void)ancestorWillUnhide;
-(void)didHide;
@end
