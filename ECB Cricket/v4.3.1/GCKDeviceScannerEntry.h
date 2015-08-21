/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class GCKDevice;

@interface GCKDeviceScannerEntry : NSObject {

	BOOL _needsFiltering;
	BOOL _isFiltering;
	BOOL _notifiedOnline;
	BOOL _changed;
	BOOL _invalid;
	BOOL _filtered;
	GCKDevice* _device;
	double _lastDiscoveredTimestamp;
	double _lastFilteredTimestamp;

}

@property (nonatomic,retain) GCKDevice * device;                          //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) BOOL needsFiltering;                         //@synthesize needsFiltering=_needsFiltering - In the implementation block
@property (assign,nonatomic) BOOL isFiltering;                            //@synthesize isFiltering=_isFiltering - In the implementation block
@property (assign,nonatomic) BOOL notifiedOnline;                         //@synthesize notifiedOnline=_notifiedOnline - In the implementation block
@property (assign,nonatomic) BOOL changed;                                //@synthesize changed=_changed - In the implementation block
@property (assign,nonatomic) BOOL invalid;                                //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) BOOL filtered;                               //@synthesize filtered=_filtered - In the implementation block
@property (assign,nonatomic) double lastDiscoveredTimestamp;              //@synthesize lastDiscoveredTimestamp=_lastDiscoveredTimestamp - In the implementation block
@property (assign,nonatomic) double lastFilteredTimestamp;                //@synthesize lastFilteredTimestamp=_lastFilteredTimestamp - In the implementation block
-(BOOL)notifiedOnline;
-(void)setNeedsFiltering:(BOOL)arg1 ;
-(void)setLastDiscoveredTimestamp:(double)arg1 ;
-(void)setIsFiltering:(BOOL)arg1 ;
-(BOOL)needsFiltering;
-(BOOL)isFiltering;
-(double)lastFilteredTimestamp;
-(double)lastDiscoveredTimestamp;
-(void)setLastFilteredTimestamp:(double)arg1 ;
-(void)setNotifiedOnline:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(BOOL)invalid;
-(void)setFiltered:(BOOL)arg1 ;
-(BOOL)filtered;
-(void)setChanged:(BOOL)arg1 ;
-(BOOL)changed;
-(GCKDevice *)device;
-(void)setDevice:(GCKDevice *)arg1 ;
@end

