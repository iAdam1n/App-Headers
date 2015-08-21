/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface MNMessagesSyncCoordinates : NSObject <TBase, NSCoding> {

	int __latitude;
	int __longitude;
	BOOL __latitude_isset;
	BOOL __longitude_isset;

}

@property (assign,setter=setLatitude:,getter=latitude,nonatomic) int latitude; 
@property (assign,setter=setLongitude:,getter=longitude,nonatomic) int longitude; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)latitudeIsSet;
-(void)unsetLatitude;
-(BOOL)longitudeIsSet;
-(void)unsetLongitude;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
-(void)setLatitude:(int)arg1 ;
-(void)setLongitude:(int)arg1 ;
-(int)latitude;
-(int)longitude;
-(id)initWithLatitude:(int)arg1 longitude:(int)arg2 ;
@end

