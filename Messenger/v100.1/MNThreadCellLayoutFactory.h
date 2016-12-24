/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNThreadCellLayout, FBMobileConfigContextManager;

@interface MNThreadCellLayoutFactory : NSObject {

	MNThreadCellLayout* _defaultThreadCellLayout;
	MNThreadCellLayout* _threadCellLayoutForCTA;
	FBMobileConfigContextManager* _mobileConfigContextManager;

}
-(id)initWithMobileConfigContextManager:(id)arg1 ;
-(id)defaultThreadCellLayout;
-(void)_initDefaultThreadCellLayoutIfNecessary;
-(void)_initThreadCellLayoutForCTAIfNecessary;
-(id)threadCellLayoutForCTA;
@end
