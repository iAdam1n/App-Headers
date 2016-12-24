/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface CKStatefulViewReusePool : NSObject {

	unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id> >, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem> > >* _pool;

}
+(id)sharedPool;
-(id)dequeueStatefulViewForControllerClass:(Class)arg1 preferredSuperview:(id)arg2 context:(id)arg3 ;
-(void)enqueueStatefulView:(id)arg1 forControllerClass:(Class)arg2 context:(id)arg3 ;
@end
