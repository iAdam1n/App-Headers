/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ECFeatureTarget : NSObject <NSCoding> {

	NSString* _name;
	long long _categoryAvailable;
	long long _locationAvailable;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long categoryAvailable;              //@synthesize categoryAvailable=_categoryAvailable - In the implementation block
@property (assign,nonatomic) long long locationAvailable;              //@synthesize locationAvailable=_locationAvailable - In the implementation block
+(id)apiStringWithAvailability:(long long)arg1 ;
+(long long)availabilityWithAPIAvailability:(id)arg1 ;
-(void)setCategoryAvailable:(long long)arg1 ;
-(long long)categoryAvailable;
-(id)initWithAPITarget:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)locationAvailable;
-(void)setLocationAvailable:(long long)arg1 ;
@end

