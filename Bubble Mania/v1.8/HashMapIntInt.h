/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface HashMapIntInt : NSObject {

	unordered_map<int, int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, int> > >* _hashMap;

}
-(int)get:(int)arg1 ;
-(void)putKey:(int)arg1 andValue:(int)arg2 ;
-(BOOL)containsKey:(int)arg1 ;
@end

