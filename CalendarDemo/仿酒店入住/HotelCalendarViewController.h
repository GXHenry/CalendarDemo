//
//  HotelCalendarViewController.h
//  BJTResearch
//
//  Created by gaoxin on 2018/1/3.
//  Copyright © 2018年 HZCitizenCard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HotelCalendarViewController : UIViewController
@property(nonatomic,copy) void(^selectCheckDateBlock)(NSString *startDate,NSString *endDate,NSString *days);
@end
