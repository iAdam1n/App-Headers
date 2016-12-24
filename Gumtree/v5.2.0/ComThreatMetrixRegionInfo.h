/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ComThreatMetrixRegionInfo : NSObject {

	unsigned _task;
	NSMutableArray* _regions;

}

@property (nonatomic,retain) NSMutableArray * regions;              //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) unsigned task;                       //@synthesize task=_task - In the implementation block
-(id)get_region_from_list:(unsigned long long)arg1 ;
-(id)populate_region_info:(unsigned long long)arg1 ;
-(BOOL)is_range_readable:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(BOOL)is_readable:(unsigned long long)arg1 ;
-(unsigned)task;
-(id)initWithTask:(unsigned)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)regions;
@end
