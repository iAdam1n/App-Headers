/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@interface IGTimestampContainer : NSObject {

	unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >* _mappedTimestamps;
	set<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > >* _orderedTimestamps;

}
-(void)setTimestamp:(double)arg1 forKey:(id)arg2 ;
-(double)timestampForKey:(id)arg1 ;
-(void)insertTimestampsFromDictionary:(id)arg1 ;
-(void)removeTimestampForKey:(id)arg1 ;
-(void)removeAllTimestamps;
-(id)dictionaryRepresentation;
@end

