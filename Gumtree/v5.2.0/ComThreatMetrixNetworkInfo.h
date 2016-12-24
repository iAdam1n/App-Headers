/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ComThreatMetrixNetworkInfo : NSObject {

	BOOL _networkAvailable;
	BOOL _wifiNetwork;
	BOOL _cellularNetwork;
	NSString* _ssid;
	NSString* _bssid;
	NSString* _type;

}

@property (nonatomic,retain) NSString * ssid;                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,retain) NSString * bssid;                      //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,retain,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL networkAvailable;               //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (assign,nonatomic) BOOL wifiNetwork;                      //@synthesize wifiNetwork=_wifiNetwork - In the implementation block
@property (assign,nonatomic) BOOL cellularNetwork;                  //@synthesize cellularNetwork=_cellularNetwork - In the implementation block
-(void)setCellularNetwork:(BOOL)arg1 ;
-(BOOL)cellularNetwork;
-(void)setWifiNetwork:(BOOL)arg1 ;
-(BOOL)wifiNetwork;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)type;
-(BOOL)networkAvailable;
-(id)initWith:(id)arg1 ;
-(NSString *)ssid;
@end
