/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface _FBKVOSharedController : NSObject {

	NSHashTable* _infos;
	int _lock;

}
+(id)sharedController;
-(void)observe:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 infos:(id)arg2 ;
-(id)init;
-(id)debugDescription;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
