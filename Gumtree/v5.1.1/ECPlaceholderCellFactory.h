/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECCellFactory.h>

@interface ECPlaceholderCellFactory : ECCellFactory {

	/*^block*/id _placeholderViewFactory;

}

@property (nonatomic,copy) id placeholderViewFactory;              //@synthesize placeholderViewFactory=_placeholderViewFactory - In the implementation block
-(BOOL)isValidForObject:(id)arg1 metadata:(id)arg2 ;
-(id)viewForObject:(id)arg1 metadata:(id)arg2 ;
-(id)placeholderViewFactory;
-(void)setPlaceholderViewFactory:(id)arg1 ;
-(id)initWithPlaceholderViewFactory:(/*^block*/id)arg1 ;
@end
