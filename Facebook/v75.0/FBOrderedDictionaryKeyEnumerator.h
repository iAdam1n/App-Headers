/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface FBOrderedDictionaryKeyEnumerator : NSEnumerator {

	map<id, id, FBOrderedDictionaryDynamicKeyComparator, std::__1::allocator<std::__1::pair<const id, id> > >* _map;
	map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<id, id>, std::__1::__tree_node<std::__1::__value_type<id, id>, void *> *, long> >* _iter;

}
-(id)nextObject;
-(id)initWithMap:(map<id, id, FBOrderedDictionaryDynamicKeyComparator, std::__1::allocator<std::__1::pair<const id, id> > >*)arg1 ;
@end
