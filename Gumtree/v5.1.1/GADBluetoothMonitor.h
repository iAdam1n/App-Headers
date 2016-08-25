/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CBCentralManager, NSString;

@interface GADBluetoothMonitor : NSObject <CBCentralManagerDelegate> {

	NSObject*<OS_dispatch_queue> _lockQueue;
	CBCentralManager* _bluetoothManager;
	long long _bluetoothState;

}

@property (readonly) long long bluetoothState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)retrieveConnectedBluetoothLowEnergyDevices;
-(id)retrieveConnectedBluetoothAudioDevices;
-(id)init;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(long long)bluetoothState;
@end

