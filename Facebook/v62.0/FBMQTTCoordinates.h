/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTCoordinates : NSObject <TBase, NSCoding> {

	NSString* __thrift_latitude;
	NSString* __thrift_longitude;
	NSString* __thrift_accuracy;
	BOOL __thrift_latitude_set;
	BOOL __thrift_longitude_set;
	BOOL __thrift_accuracy_set;

}

@property (nonatomic,retain) NSString * latitude; 
@property (nonatomic,retain) NSString * longitude; 
@property (nonatomic,retain) NSString * accuracy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)latitudeIsSet;
-(BOOL)longitudeIsSet;
-(void)unsetLatitude;
-(void)unsetLongitude;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 accuracy:(id)arg3 ;
-(BOOL)accuracyIsSet;
-(void)unsetAccuracy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)accuracy;
-(void)setLatitude:(NSString *)arg1 ;
-(void)setLongitude:(NSString *)arg1 ;
-(void)setAccuracy:(NSString *)arg1 ;
-(NSString *)latitude;
-(NSString *)longitude;
-(void)write:(id)arg1 ;
@end
