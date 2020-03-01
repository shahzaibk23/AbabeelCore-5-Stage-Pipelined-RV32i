// See LICENSE.txt for license details.
package datapath

import chisel3.iotesters.{Driver, TesterOptionsManager}
import utils.TutorialRunner

object Launcher {
  val examples = Map(
	"ITD" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ITD(), manager) {
          (c) => new ITDTests(c)
        }
      },
	"CD" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new CD(), manager) {
          (c) => new CDTests(c)
        }
      },
	"Control" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Control(), manager) {
          (c) => new ControlTests(c)
        }
      },
	"AluControl" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new AluControl(), manager) {
          (c) => new AluControlTests(c)
        }
      },
	"ALU" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ALU(), manager) {
          (c) => new AluTests(c)
        }
      },
	"ImmGen" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ImmGen(), manager) {
          (c) => new ImmGenTests(c)
        }
      },
	"RegFile" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new RegFile(), manager) {
          (c) => new RegFileTests(c)
        }
      },
	"Top" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Top(), manager) {
          (c) => new TopTests(c)
        }
      },
	"JalrTarget" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new JalrTarget(), manager) {
          (c) => new JalrTests(c)
        }
      },
	"PC" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new PC(), manager) {
          (c) => new PCTests(c)
        }
      },
	"InsMem" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new InsMem(), manager) {
          (c) => new InsMemTests(c)
        }
      },
	"MainMem" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new MainMem(), manager) {
          (c) => new MainMemTests(c)
        }
      },
	"IF_ID" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new IF_ID(), manager) {
          (c) => new IF_ID_Tests(c)
        }
      },
	"ID_EXE" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ID_EXE(), manager) {
          (c) => new ID_EXE_Tests(c)
        }
      },
	"EXE_MEM" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new EXE_MEM(), manager) {
          (c) => new EXE_MEM_Tests(c)
        }
      },
	"MEM_WR" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new MEM_WR(), manager) {
          (c) => new MEM_WR_Tests(c)
        }
      },
	"blankReg" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new blankReg(), manager) {
          (c) => new blankRegTests(c)
        }
      },
	"HDU" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new HDU(), manager) {
          (c) => new HDU_Tests(c)
        }
      },
	"StallUnit" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new StallUnit(), manager) {
          (c) => new SU_Tests(c)
        }
      },
	"BranchUnit" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new BranchUnit(), manager) {
          (c) => new BU_Tests(c)
        }
      },
	"BranchFwdUnit" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new BranchFwdUnit(), manager) {
          (c) => new BFU_Tests(c)
        }
      },
	"JalrFwdUnit" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new JalrFwdUnit(), manager) {
          (c) => new JFU_Tests(c)
        }
      },
	"StoreFwdUnit" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new StoreFwdUnit(), manager) {
          (c) => new SFU_Tests(c)
        }
      }
)

  def main(args: Array[String]): Unit = {
    TutorialRunner("examples", examples, args)
  }
}

