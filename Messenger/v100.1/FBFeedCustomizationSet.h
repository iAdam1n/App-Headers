/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface FBFeedCustomizationSet : NSObject <NSCopying> {

	NSMapTable* _customizations;

}
-(id)customizationForClass:(Class)arg1 ;
-(void)_addSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(void)_removeSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)initWithCustomizations:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)customizationsByAddingCustomizationSet:(id)arg1 ;
-(id)customizationsByAddingSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)customizationsByRemovingSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
