/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CKComponentScopeHandle;

@interface CKComponentScopeFrame : NSObject {

	unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::__1::hash<_CKStateScopeKey>, std::__1::equal_to<_CKStateScopeKey>, std::__1::allocator<std::__1::pair<const _CKStateScopeKey, CKComponentScopeFrame *> > >* _children;
	CKComponentScopeHandle* _handle;

}

@property (nonatomic,readonly) CKComponentScopeHandle * handle;              //@synthesize handle=_handle - In the implementation block
+(CKComponentScopeFramePair)childPairForPair:(const CKComponentScopeFramePair*)arg1 newRoot:(id)arg2 componentClass:(Class)arg3 identifier:(id)arg4 initialStateCreator:(/*^block*/id)arg5 stateUpdates:(const unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >*)arg6 ;
-(id)initWithHandle:(id)arg1 ;
-(CKComponentScopeHandle *)handle;
@end

